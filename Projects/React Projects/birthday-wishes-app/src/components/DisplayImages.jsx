import { Container, Row, Card, Col } from 'react-bootstrap';


export default function DisplayItems(props) {


    return (
        <>

            <Container>
                <Row className="justify-content-center">
                    {props.Data === null || undefined ? (
                        <Col style={styles.noMatch}>
                            <strong>Not Found</strong>
                        </Col>
                    ) : (
                        props.Data.map((data, index) => {
                            return (
                                <>
                                    {data.type === "img" &&
                                        <Col key={index} lg="4" md="6" sm="12" onClick={() => {
     
                                        }}>
                                            <Card className="m-4 bg-dark">

                                                <>
                                                    <Card.Img variant="top" alt={data.title} src={data.path} />
                                                    <Card.Body className="bg-dark text-light" >
                                                        <Card.Title>{data.title}</Card.Title>
                                                        <Card.Text>{data.description}</Card.Text>
                                                    </Card.Body>
                                                </>
                                            </Card>
                                        </Col>}
                                </>);
                        })
                    )}
                </Row>
            </Container >
        </>
    );
}


const styles = {
    noMatch: {
        display: "flex",
        padding: "5rem",
        justifyContent: "center",
        alignItems: "center",
        alignContent: "center",
        border: "light 5px white",
        fontSize: "2rem"
    },
}