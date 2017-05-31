open Element;

module App = {
  include ReactRe.Component;
  type props = {title: string};
  let name = "App";
  let handleClick _ _ => {
    Js.log "clicked!";
    None
  };
  let testElement = <div> (strToEl "testElement") </div>;

  let render _ =>
    <div className="App">
      (el Title String "I'm a h1")
      (el Text String "I'm a span")
    </div>;
};

include ReactRe.CreateComponent App;

let createElement ::title => wrapProps {title: title};
