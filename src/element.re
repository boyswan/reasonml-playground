let style = ReactDOMRe.Style.make;
let strToEl = ReactRe.stringToElement;

module Styles = {

  let title = style
    fontSize::"22px"
    fontWeight:: "600" ();

  let text = style
    fontSize::"16px" ();

  let paragraph = style
    fontSize::"12px" ();

};


type getType =
  | String
  | Number;

let getType t v => {
  switch t {
    | String _ => v |> strToEl
    | Number _ => v |> strToEl
  };
};


type t =
  | String
  | Component
  | Number;

type element =
  | Title
  | Text
  | Paragraph;

type el = element => t => ReactRe.reactElement;
let el e t v => {
  let value = getType t v;
  Js.log value;
  switch e {
    | Title => <h1 style=Styles.title>value</h1>
    | Text => <span style=Styles.text>value</span>
    | Paragraph => <p style=Styles.paragraph>value</p>
  };
};
