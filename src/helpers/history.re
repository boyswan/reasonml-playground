type history;

let addHash = (^) "/#";

let capital = String.capitalize;

external pushState : string => string => string => history = "history.pushState" [@@bs.val];

let push path => pushState "null" (capital path) (addHash path);
