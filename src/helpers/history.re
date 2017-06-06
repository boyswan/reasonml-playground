module History = {
  type element;
  let window: element = [%bs.raw "window"];
  external pushState : state::unit => title::string => path::string => element =
    "history.pushState" [@@bs.val];
};

let push = History.pushState title::"" state::();
