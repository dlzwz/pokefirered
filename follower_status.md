PROJECT
- Repo: pret/pokefirered (local clone)
- Reference implementation: FireRedUltra (present at ./FireRedUltra)
- Feature: Following Pokémon

CURRENT STATE
- Following Pokémon system is working.
- Pikachu follower spawns, follows, and despawns correctly.
- Idle follower bobbing matches FireRedUltra.
- Follower despawns correctly when:
  - Surfing
  - Riding a bicycle
  - Entering buildings
  - Using stairs (up and down)

CURRENT TASK
- Despawn Pikachu follower during escalator transitions.
- Escalators use forced movement similar to stairs/building entry.
- Current build does not despawn follower when using escalators.