When CMake complains about strange errors, something about "libluashared destination should be different from source", do:

    ./gradlew clean
    rm -rf app/.cxx

to solve the problem.

To start the native activity from command line (the emulator buttons don't work and this is drawing me crazy!):

    adb shell am start -a android.intent.action.MAIN -n "it.couchgames.app.nativeactivitytest/android.app.NativeActivity"
