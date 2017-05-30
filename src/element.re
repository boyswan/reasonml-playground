let style = ReactDOMRe.Style.make;
let toStr = ReactRe.stringToElement;

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
  | Int int
  | String string;

let getType v => {
  switch v {
    | String _ => ("string", v)
    | Int _ => ("number", v)
  };
};

type element =
  | Title
  | Text
  | Paragraph;

type el = element => string => ReactRe.reactElement;
let el t v => {
  /* Js.log (getType 3); */
  /* Js.log (getType v); */
  let value = toStr v;
  switch t {
    | Title => <h1 style=Styles.title>value</h1>
    | Text => <span style=Styles.text>value</span>
    | Paragraph => <p style=Styles.paragraph>value</p>
  };
};
