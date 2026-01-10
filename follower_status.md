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
  - Using stairs (up/down)
  - Using escalators

CURRENT TASK
- Implement follower spawn and despawn animations to match FireRedUltra.
- In FireRedUltra, follower does not instantly appear or disappear.
- A Poké Ball graphic briefly appears on the ground with an white effect on top of the follower sprite to shrink or grow it out or from the Poké Ball.
- The follower appears/grows from or vanishes/shrinks into the Poké Ball.
- This effect occurs both on spawn and on despawn.