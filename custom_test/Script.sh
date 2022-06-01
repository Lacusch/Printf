#!/usr/bin/env bash

echo "Chose tests to run"
echo "Options a (default), u (unsigned):"
read Test

if [ "$Test" == "a" ]
then
    echo "all tests"
fi
if [ "$Test" == "u" ]
then 
	./unsigned_test
fi