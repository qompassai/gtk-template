# Qompass AI GTK template — repository guide

## The contract

Every Qompass AI tool repo follows the same layout so a reader can
jump between projects without relearning the map:

- `src/` — starter configs, scripts, and automation skeletons.
  Every file names its validation command at the top.
- `tests/` — validation notes: the exact check command for each starter
  (`nginx -t`, `terraform validate`, `named-checkzone`, ...).
- `docs/` — deep dives: setup, operations, gotchas, and an ecosystem
  map (packages, services, debuggers, related templates).
- `examples/` — smallest-first usable snippets.

## Conventions

- Tiger style everywhere: explicit contracts, no cleverness, ELI5
  comments where the subject is surprising.
- Validate before you commit: every starter file documents its check.
- Secrets never enter version control — use a password manager or the
  platform's secret store, referenced (not embedded) by the config.
- Apache 2.0 only. Third-party code stays in `third_party/` with its own
  license intact and a note in the changelog — never relicensed.
- Neovim-first: the project is driven from diver; see `docs/NEOVIM.md`.
