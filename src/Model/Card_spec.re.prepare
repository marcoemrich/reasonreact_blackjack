open Jest;
open Expect;

describe("Card.score", () => {
  test("Card.score of a Number is the number", () => {
    expect(Card.score({suit: Heart, name: Number(5)})) |> toEqual(5)
  });
  test("Card.score of Jack is 10", () => {
    expect(Card.score({suit: Cross, name: Jack})) |> toEqual(10)
  });
  test("Card.score of Ace is 1", () => {
    expect(Card.score({suit: Cross, name: Ace})) |> toEqual(1)
  });
});

describe("Card.color", () => {
  test("maps cross and spade to black", () => {
    let card: Card.t = {suit: Cross, name: Number(5)};
    expect(Card.color(card)) |> toEqual("black");
  });
  test("maps heart and diamonds to red", () => {
    let card: Card.t = {suit: Heart, name: Number(5)};
    expect(Card.color(card)) |> toEqual("red");
  });
});