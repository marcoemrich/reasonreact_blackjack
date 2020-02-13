type t = list(Card.t);

let score = hand => hand |> List.map(Card.score) |> List.fold_left((+), 0);