# Development Guidelines

## Development workflow

1. Create an issue describing the objective and acceptance criteria.
2. Assign a milestone, priority and size.
3. Move the issue to Ready when sufficiently defined.
4. Move the issue to In progress when starting work.
5. Create a development branch from `main`.
6. Implement changes in logical, self-contained commits.
7. Verify the acceptance criteria.
8. Move the issue to In review and create a pull request.
9. Review and integrate changes using Rebase and merge.
10. Delete the development branch and synchronize the local repository.

## Branching strategy

The project follows trunk-based development with short-lived development branches.

The `main` branch must remain in a working state.

### Branch naming

Use the format `type/issue-number-description`.

Examples:

- `feature/5-application-lifecycle`
- `fix/12-window-resizing`
- `docs/3-development-conventions`
- `refactor/15-renderer-interface`
- `build/7-configure-cmake`
- `experiment/renderer-batching`

## Commit conventions

The project follows Conventional Commits.

Format: `type(scope): description`

The scope is optional.

| Type | Purpose |
|---|---|
| feat | New functionality |
| fix | Bug fixes |
| docs | Documentation |
| refactor | Internal restructuring |
| perf | Performance improvements |
| test | Testing |
| build | Build system and dependencies |
| ci | Continuous integration |
| chore | General maintenance |
| style | Code formatting |

Commits should represent individual logical changes and should not contain unrelated modifications.

## Pull requests

Every pull request should include:

- Summary of changes.
- Verification performed.
- Reference to the associated issue using `Closes #N`.

Use Rebase and merge to preserve individual commits and maintain a linear Git history.

## Versioning

The project follows Semantic Versioning (MAJOR.MINOR.PATCH).

- MAJOR: Backward-incompatible changes.
- MINOR: Backward-compatible functionality.
- PATCH: Backward-compatible fixes.

During initial development (0.x.x), breaking changes may be introduced through minor versions.

Official releases use annotated Git tags prefixed with `v`, such as `v0.1.0`.

Published release tags must not be modified.

## Release process

1. Complete the milestone acceptance criteria.
2. Verify builds and tests.
3. Update project version information and CHANGELOG.md.
4. Integrate release preparation changes into `main`.
5. Create and push an annotated Git tag.
6. Publish a GitHub Release with release notes and applicable artifacts.
7. Close the milestone.

## Definition of done

- All issue acceptance criteria are satisfied.
- Relevant builds and tests pass.
- Changes follow project conventions.
- Documentation is updated where necessary.
- No unrelated changes are included.
- Commit history is meaningful.
- Changes have been reviewed and integrated into `main`.

## Scope management

Focus on one primary issue at a time.

Record unrelated improvements and ideas as backlog issues rather than expanding the current task.

Experimental branches may be used to investigate technical approaches before committing to an implementation.