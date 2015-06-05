Oculus SDK / eeGeo SDK
----------------------

**Running**

* Run `./update.platform -p osx` from the root of the repository
* Download and install [Oculus OS X Runtime 0.4.1](https://developer.oculus.com/downloads/#sdk=any&status=any)
* Install supporting libs via [Homebrew](http://brew.sh/)
	* `brew install libjpg`
	* `brew install libpng`
* Open `/Samples/LibOVR_With_Samples.xcworkspace` in XCode
* Select OculusWorldDemo from the run configurations- the x86_64 build should work fine

**Please Note**

* Alpha release only - not supported!
* More information at http://eegeo.com/oculusvr/

**Recommended Versions (only tried on these)**

* Headset firmware 2.12
* Oculus OSX Runtime 0.4.1 (0.4.4 has bad jitter)
* Mac with GPU capable of hitting 75Hz when rendering eeGeo SDK

**Oculus Headset Setup**

* This is *important* if you want stable framerate on OSX:
* Setup Oculus as a second _non mirrored_ monitor, rotated 90o, 1080p (or option 'best for Oculus DK2') and 75hz 
* Set the Oculus monitor as the Primary Monitor (this causes problems when opening apps, remove the lenses, you enjoy that now)

**Controls**

* Headset - head movement
* Mouse - body rotation
* WASD - body movement
* F/R - Altitude inc/decr
* G - Gravity
* N - Night
* O - Couple of fly throughs
* T - Jump Locations
* L - Fullscreen (required for decent framerate)
