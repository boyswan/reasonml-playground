let style = ReactDOMRe.Style.make;

let ste = ReactRe.stringToElement;

module Styles = {
  let title = style fontSize::"22px" fontWeight::"600" ();
  let text = style fontSize::"16px" ();
  let paragraph = style fontSize::"12px" ();
};

type element =
  | Title
  | Text
  | Paragraph;

type el = element => ReactRe.reactElement;

let el element value => {
  let str = ste value;
  switch element {
  | Title => <h1 style=Styles.title> str </h1>
  | Text => <span style=Styles.text> str </span>
  | Paragraph => <p style=Styles.paragraph> str </p>
  }
};
