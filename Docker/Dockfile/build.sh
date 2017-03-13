#!/bin/sh

DOCKERFILE="./Dockerfile"

if [ ! -f "$DOCKERFILE" ]; then
	echo "dockerfile doesn't exist." 1>&2
	exit 1
fi

docker build --force-rm -t debian-env -f $DOCKERFILE .
