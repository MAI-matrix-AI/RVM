import React, { useState, useEffect } from 'react';

function Clock() {
  const [date, setDate] = useState(new Date());

  useEffect(() => {
    const timerID = setInterval(() => setDate(new Date()), 1000);
    return () => clearInterval(timerID);
  }, []);
}

return (
    <div>
      <h1>Clock</h1>
      <h2>It is {date.toLocaleTimeString()}.</h2>
    </div>
  );
