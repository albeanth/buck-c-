### buck-cpp
A place to test an implementation of c++ and buck to get a more complete c++ IDE in [Atom](https://atom.io/) using [Nuclide](https://nuclide.io/docs/languages/cpp/).

#### Prerequisites for buck:
1. [Buck](https://buckbuild.com/setup/getting_started.html)
    * on MacOS, install with Homebrew.
2. [Watchman](https://facebook.github.io/watchman/docs/install.html) (optional)
    * on MacOS, more Homebrew.
    * installing will get rid of a warning when buck builds buck target.

#### Notes on current status of repo
* this repo uses c++11 syntax.
* you _should_ be able to execute a clean pull of this repo by invoking `buck run //:test` in the command line
* this work follows a combination of the buck documentation and this [Hackernoon article](https://hackernoon.com/how-to-create-a-buck-based-c-c-project-38b85273d6a6)
