#! /usr/bin/env bash

function index()
{
    make -C ./bin -f ../makefile && make clean
}

index