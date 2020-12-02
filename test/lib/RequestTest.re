open TestFramework;

let root = Utils.getProjectDir();

describe("should return x", ({test, _}) => {
  test("Generic test", ({expect, _}) => {
    let x = ReasonAwsSqs.x;
    expect.int(x).toBe(1);
  });
});