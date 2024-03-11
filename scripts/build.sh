#!/usr/bin/env bash
podman run -v $(pwd):/src --privileged -it localhost/cross-arm:latest scripts/cross.sh scripts/rp3.env
podman run -v $(pwd):/src --privileged -it localhost/cross-arm:latest scripts/cross.sh scripts/rp4.env
podman run -v $(pwd):/src --privileged -it localhost/cross-arm:latest scripts/cross.sh scripts/aarch64.env
