# Xinrui Cup 2023 — winning combat robot (source, preserved)

**7th Xinrui Innovation Robotics Contest (第七届新锐创新杯机器人大赛)**
Harbin Institute of Technology, 2nd Campus main hall · 14 May 2023
~90 participants, 20 teams · **Team 21 — 1st place (冠军)**

Team: two students from Malaysia, one from Cambodia, one from Korea (me).
Freshman year. Format was combat rules — push or lift the opponent out of the
ring.

Third-party record, published by the university:

- [Match report, 17 May 2023](https://today.hit.edu.cn/article/2023/05/17/103860) (includes the team roster)
- [Contest summary, 19 May 2023](https://today.hit.edu.cn/article/2023/05/19/103945)

This repository is the source code, **author-attested unmodified**, plus an
honest note on what it is and what it is not.

To be exact about what that attestation rests on: this repository was created in
2026 with a single root commit, so **its git history proves nothing about 2023**.
It shows only that these bytes are unaltered since publication. The competition
result is third-party verifiable through the two university articles below; the
identity of this source as the 2023 artifact is my word, corroborated only
circumstantially by the `_ABVAR_*` ArduBlock naming and the preserved CRLF line
endings. There is no chain of custody linking these bytes to the robot that
competed, and the articles say nothing about which code ran.

---

## What is here

| File | Role |
|---|---|
| `sketches/master.ino` | Controller board. Reads 4 analog channels (A0–A3, two joystick axes), quantises each to 0–3 with `map()`, and emits a direction code 1–10 over serial. |
| `sketches/slave.ino` | Drive board. Reads codes with `Serial.parseInt()`, drives left/right motors through a 4-pin H-bridge (5, 6, 9, 10), attaches two servos (11, 7). |

Two boards, split by concern — input on one, drive on the other, joined over
serial. Standard shape for a remotely-driven combat robot, and it matches what
I actually did on the team: mechanical stability (sensors, chassis), balance,
grip and module placement, and improvising tactics between rounds.

---

## What this code is not

I would rather you read this section than discover it yourself.

**It is generated, not hand-written.** The `_ABVAR_*` names and the brace style
are ArduBlock output — a block-to-code tool. We were first-year students and we
used the accessible tool. That is what happened.

**It contains a live bug, and I have left it in.** In `slave.ino`, the two
`digitalRead(2)` branches at the top of `Select()` test the same condition
(`!digitalRead(2)`) for both Forward and Back, so only the first can ever
match — the bump-sensor logic was never finished. Codes 7 and 9 call the
lowercase `left()` / `right()` single-side rotations.

I know how to fix it. Fixing it here would make the repository a claim about my
current ability rather than a record of what won in 2023, and the record is the
point. If you want to see what I write now, that is a
[different repository](https://github.com/espressolee/firing-checks).

**My contribution was mostly mechanical.** The win came from chassis stability,
grip, and weight placement under combat rules, not from this firmware. Reading
these 242 lines as evidence of software skill would be reading them wrong.

---

## Why publish it anyway

The result is verifiable — two university articles, named roster, dated. That
is worth more than a cleaner repository would be, and it stops being worth
anything if the code beside it has been quietly improved after the fact.

## License

MIT. The competition articles belong to HIT and are linked, not reproduced.
