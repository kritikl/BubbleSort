# bubbleSort implementation and test using googleTest

## install steps:
* check if g++ & cmake installed
    > g++ -v
    > cmake --version
* if not alreay installed:
    > sudo apt install g++ cmake
* install required extensions in vscode:

  CMake Tools, Markdown All in one (Press ctrl-\ & ctrl-shift-v to preview this Readme.md once installed), Markdown PDF Plus, Markdown+Math etc
* clone googletest
  > git clone github.com/google/googletest
  > mkdir build
* update CMakeLists.txt as per: https://stackoverflow.com/questions/62910867/how-to-run-tests-and-debug-google-test-project-in-vs-code but modified to include dirs src, test, build

* 