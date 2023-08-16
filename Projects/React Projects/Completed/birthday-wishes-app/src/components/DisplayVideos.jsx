import { Container, Row, Col } from 'react-bootstrap';


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
                                <Col key={index} lg="4" md="6" sm="12" style={styles.bgImg} >
                                    {data.type === "video" &&

                                        <video controls style={{ width: "360px" }} > <source src={data.path} type="video/mp4" /> </video>
                                    }
                                </Col>
                            );
                        })
                    )}
                </Row>
            </Container>
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
    bgImg: {
        margin: "15px",
        backgroundImage: "https://images.pexels.com/photos/243971/pexels-photo-243971.jpeg?cs=srgb&dl=pexels-pew-nguyen-243971.jpg&fm=jpg&_gl=1*fi2dzw*_ga*MTI5MTk4Mzc4OS4xNjg4MTM2MTcz*_ga_8JE65Q40S6*MTY4ODEzNjE3NC4xLjEuMTY4ODEzNjU5MS4wLjAuMA.."
    }

}