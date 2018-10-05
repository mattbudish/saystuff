# Saystuff

Saystuff is a super-simple example of a C++ project using a multistage Docker build for a very small runtime container image demonstrating dynamic loading of shared libraries. This is intended to be a starting point for more sophisticated projects.

## Usage
```
$ docker build -t saystuff .
$ docker run --rm saystuff
Hello from FOO library!
$ docker run --rm saystuff 1
Hello from BAR library!
```