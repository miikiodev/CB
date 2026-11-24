# ADR-0001: Dependency Management

**Status:** Accepted

## Context

Coffee Bean requires third-party libraries across Windows and Linux.

The previous framework used vendored dependencies, resulting in increased repository size and longer clean build times.

## Decision

Use vcpkg in manifest mode with CMake integration.

Dependency versions will be controlled through the vcpkg manifest and registry baseline.

## Alternatives considered

- Vendored dependencies.
- Git submodules.
- CMake FetchContent.
- Conan.

## Rationale

- Cross-platform support.
- Native CMake integration.
- Version-controlled dependency configuration.
- Binary caching.
- Reduced repository size.
- Automated dependency resolution.

## Consequences

- Developers must have vcpkg available.
- CI requires vcpkg configuration.
- Initial dependency builds may be expensive.
- Compatible compiled dependencies can be reused through binary caching.
- System-level dependencies may require separate installation.