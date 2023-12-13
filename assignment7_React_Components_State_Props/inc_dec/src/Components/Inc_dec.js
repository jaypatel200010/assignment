import React, { useState } from "react";
import ReactDOM from "react-dom/client";

export default function Inc_dec() {
  const [count, setCount] = useState(0);

  return (
    <>
      <p>Count: {count}</p>
      <button type="button" id="inc" onClick={() => setCount((c) => c + 1)}>
        inc
      </button>
      <button type="button" id="reset" onClick={() => setCount((c) => c - c)}>
        reset
      </button>
      <button type="button" id="dec" onClick={() => setCount((c) => c - 1)}>
        dec
      </button>
    </>
  );
}
const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<Inc_dec />);
