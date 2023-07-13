import React, { useState } from "react";
import Data from "./components/metadata/Data";
import DisplayImages from "./components/DisplayImages";
import DisplayVideos from "./components/DisplayVideos";
import "bootstrap/dist/css/bootstrap.css";
import {
  Container,
  Row,
  Col,
  InputGroup,
  FormControl,
  Button,
} from "react-bootstrap";
import { FaSearch } from "react-icons/fa";
import Header from "./components/Header";
import "./App.css";

export default function App() {
  const [inputValue, setInputValue] = useState("");
  const [list, setList] = useState(Data);
  const [ShowImages, setShowImages] = useState(true);
  const [ShowVideos, setShowVideos] = useState(false);

  const handleSubmit = () => {
    try {
      if (inputValue.trim() === "") {
        setList(Data);
      } else {
        const filteredValue = Data.filter((value) =>
          // return true if string or sundtring matched
          value.title.toLowerCase().includes(inputValue.toLowerCase())
        );
        if (filteredValue.length === 0) {
          throw new Error("No match");
        }
        setList(filteredValue);
      }
    } catch (error) {
      setList(null);
    }
  };

  return (
    <>
      {/* Header */}
      <Header />
      {/* Buttom for Switch between images and videos */}
      <Container style={{ fontFamily: "Nanum Gothic, sans-serif" }}>
        <Row className="justify-content-between" style={{ paddingTop: "15px" }}>
          <Col className="d-flex justify-content-start align-items-end">
            <Button
              variant=""
              style={{
                backgroundColor: "#E38B29",
              }}
              onClick={() => {
                setShowImages(true);
                setShowVideos(false);
              }}
            >
              Images
            </Button>
          </Col>
          <Col className="d-flex justify-content-end align-items-end">
            <Button
              variant=""
              style={{ backgroundColor: "#E38B29" }}
              onClick={() => {
                setShowImages(false);
                setShowVideos(true);
              }}
            >
              Videos
            </Button>
          </Col>
        </Row>
      </Container>

      {/* Sarch bar */}

      <Container>
        <Row className="justify-content-center">
          <Col sm="6" md="4">
            <InputGroup style={{ marginTop: "1rem" }}>
              <FormControl
                style={{
                  maxWidth: "75rem",
                  color: "Yellow",
                  borderColor: "Black",
                }}
                className="bg-dark"
                type="text"
                value={inputValue}
                onChange={(event) => setInputValue(event.target.value)}
                onKeyDown={(event) => {
                  if (event.key === "Enter") {
                    handleSubmit();
                  }
                }}
              />
              <Button
                style={{ zIndex: 0 }}
                variant="outline-primary"
                onClick={handleSubmit}
              >
                <FaSearch />
              </Button>
            </InputGroup>
          </Col>
        </Row>
      </Container>

      {ShowImages && <DisplayImages Data={list} />}
      {ShowVideos && <DisplayVideos Data={list} />}
    </>
  );
}
