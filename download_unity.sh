#!/bin/bash

# Downloading the Unity test library files
# https://github.com/ThrowTheSwitch/Unity
mkdir Unity && cd Unity
mkdir src && cd src
wget https://raw.githubusercontent.com/ThrowTheSwitch/Unity/master/src/unity.c
wget https://raw.githubusercontent.com/ThrowTheSwitch/Unity/master/src/unity.h
wget https://raw.githubusercontent.com/ThrowTheSwitch/Unity/master/src/unity_internals.h

clear
