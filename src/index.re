/* let route = Router.Home; */
module Root =
  Reductive.MakeProvider {
    type state = Store.appState;
    type action = Store.action;
  };

let app = <Root store=Store.store component=App.createElement />;


ReactDOMRe.renderToElementWithId app "root";
/* ReactDOMRe.renderToElementWithId <Router route /> "root"; */
