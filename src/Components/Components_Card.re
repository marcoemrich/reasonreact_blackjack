let showSuit = (card: Card.t) =>
  switch (card.suit) {
  | Heart => {js|♥|js}
  | Cross => {js|♣|js}
  | Spade => {js|♠|js}
  | Diamonds => {js|♦|js}
  };

let showName = (card: Card.t) =>
  switch (card.name) {
  | Number(v) => {j|$v|j}
  | Ace => {js|A|js}
  | Jack => {js|J|js}
  | Queen => {js|Q|js}
  | King => {js|K|js}
  };

[@react.component]
let make = (~card: Card.t) => {
  <div className="card">
    <div className="card-text">
      <span style={ReactDOMRe.Style.make(~color=Card.color(card), ())}>
        {React.string(showSuit(card) ++ " " ++ showName(card))}
      </span>
    </div>
  </div>;
};