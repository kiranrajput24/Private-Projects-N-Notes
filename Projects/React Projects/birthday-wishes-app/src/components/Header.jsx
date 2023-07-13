import React, { useState } from 'react';
import { Navbar } from 'react-bootstrap';
import audioFile from  '../audio.mp3';
const audio = new Audio(audioFile);


const Header = (props) => {
  const [isPlaying, setIsPlaying] = useState(false);

  return (
    <Navbar bg="" expand='lg' style={{
      fontFamily: "Spirax, cursive", width: "100%", color: "#E38B29", backgroundColor: "#E38B29"
    }} onClick={() => {
      setIsPlaying(!isPlaying)
      if (isPlaying) { audio.play() }
      else { audio.pause() }
    }
    }>
      <Navbar.Brand href='#home'> Happy Happy Happy Birthday Dear  Anisha</Navbar.Brand>
    </Navbar >
  );
}


export default Header;

