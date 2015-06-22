// Copyright (c) 2014 eeGeo Ltd. All rights reserved.

#pragma once

#include "Types.h"
#include "CatmullRomSpline.h"
#include "VectorMathDecl.h"

namespace Eegeo
{
    namespace OVR
    {
        class CameraPositionSpline : protected Eegeo::NonCopyable
        {
        public:
            CameraPositionSpline()
            : m_playbackSpeed(0.03)
            , m_playing(false)
            , m_time(0.0)
            , m_currentSpline(0)
            {
                SetSpline(m_currentSpline);
            }
            
            void AddPoint(const dv3& ecefEyePosition, const m33& orientation);
            void Update(float dt);
            
            void Start();
            void Stop();
            
            double GetPlaybackSpeed() const { return m_playbackSpeed; }
            void SetPlaybackSpeed(double speed) { m_playbackSpeed = speed; }
            
            const bool IsPlaying() const { return m_playing; }
            
            void Spew();
            void Clear();
            
            void NextSpline();
            
            void GetCurrentCameraPosition(dv3& interpolatedPositionEcef, m33& interpolatedOrientation) const;
        private:
            void SetSpline(int splineId);
            
            
            Geometry::CatmullRomSpline m_positionSpline;
            Geometry::CatmullRomSpline m_forwardSpline;
            Geometry::CatmullRomSpline m_upSpline;
            Geometry::CatmullRomSpline m_rightSpline;
            double m_playbackSpeed;
            double m_time;
            bool m_playing;
            int m_currentSpline;
        };
    }
}