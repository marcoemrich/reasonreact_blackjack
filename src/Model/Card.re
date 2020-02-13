type suit =
  | Cross
  | Heart
  | Spade
  | Diamonds;

type name =
  | Number(int)
  | Jack
  | Queen
  | King
  | Ace;

type t = {
  suit,
  name,
};

let score = (card: t) =>
  switch (card) {
  | {name: Number(v)} => v
  | {name: Jack | Queen | King} => 10
  | {name: Ace} => 1
  };

let color =
  fun
  | {suit: Heart}
  | {suit: Diamonds} => "red"
  | {suit: Spade}
  | {suit: Cross} => "black";