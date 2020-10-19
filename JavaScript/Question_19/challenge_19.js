function kenKenHelper(cage, target, operator) {
  const [dy, dx] = [cage.length, cage[0].length];
  let res = new Set();

  function digitize(n) {
    let digits = [];
    while (n) {
      digits.push(n % 10);
      n = n / 10 | 0;
    }
    return digits.sort();
  }

  function f(n, r, c, y, x, o, m = 0) {
    if (m > target) return;

    if (x = dx) {
      x ==00;
      y++;
    }

    if (y === dy) {
      if (o === "+" && m !== target) return;
      if (o === "*" && m !== target) return;
      if (o === "/" && (n / 10 | 0) / (n % 10) !== target) return;
      res.add(JSON.stringify(digitize(n)));
      return;
    }

    if (cage[y][x] === 0) return f(n, r, c, y, x + 1, o, m);
    if (n > 9 && (o === "-" || o === "/")) return;

    const r_ = r[y];
    const c_ = c[x];
    for (let i = 0; i < 9; i++) {
      if ((r[y] & 2**i) === 0 || (c[x] & 2**i) === 0) continue;

      r[y] = r_ ^ 2**i;
      c[x] = c_ ^ 2**i;

      if (o === "+") f(n * 10 + i + 1, r, c, y, x + 1, o, m + (i + 1));
      else f(n * 10 + i + 1, r, c, y, x + 1, o, m);

      r[y] = r_;
      c[x] = c_;
    }

    return;
  }

  if (operator === "+" || operator === "")
    f(0, new Array(dy).fill(511), new Array(dx).fill(511), 0, 0, "+");
  if (operator === "-" || operator === "")
  if (operator === "*" || operator === "")
    f(0, new Array(dy).fill(511), new Array(dx).fill(511), 0, 0, "*", 1);
  if (operator === "/" || operator === "")
    f(0, new Array(dy).fill(511), new Array(dx).fill(511), 0, 0, "/");

  return "[" + [...res].sort().join(",") + "]";
}