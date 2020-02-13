open Jest;
open Expect;

describe("Something", () => {
  test("should pass", () => {
    expect(1 + 1) |> toEqual(2)
  })
});