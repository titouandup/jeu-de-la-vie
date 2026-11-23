# jeu-de-la-vie

Projet block POO CPI A2 : Jeu de la vie en C++.

## Documentation

- Diagramme de classes : [Diagrammes/diagramme-classes.md](Diagrammes/diagramme-classes.md)
- Diagramme de séquence : [Diagrammes/diagramme-sequence.md](Diagrammes/diagramme-sequence.md)
- Diagramme d'activité : [Diagrammes/diagramme-activite.md](Diagrammes/diagramme-activite.md)

## Structure

- `include/` : déclarations des classes (`.hpp`)
- `src/` : définitions des méthodes (`.cpp`)

## Avancement

| Classe | Fichiers | État |
|---|---|---|
| CellState | `CellState.hpp` | écrit |
| Cell | `Cell.hpp` | écrit (à aligner sur le diagramme) |
| AliveState | `AliveState.hpp` | écrit (à aligner sur le diagramme) |
| DeadState | `DeadState.hpp` | écrit (à aligner sur le diagramme) |
| ObstacleState | `ObstacleState.hpp`, `.cpp` | à faire |
| Grid | `Grid.hpp` écrit, `Grid.cpp` : constructeur écrit | en cours |
| Game | `Game.hpp`, `.cpp` | à faire |
| FileManager | `FileManager.hpp`, `.cpp` | à faire |
| GameException | `GameException.hpp` | à faire |
| Renderer | `Renderer.hpp` | à faire |
| ConsoleRenderer | `ConsoleRenderer.hpp`, `.cpp` | à faire |
| SfmlRenderer | `SfmlRenderer.hpp`, `.cpp` | à faire |
