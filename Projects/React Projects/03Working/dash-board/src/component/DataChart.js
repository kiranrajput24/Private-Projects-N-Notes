import React from "react";
import { Bar } from "react-chartjs-2";
import chartDatajson from "./data/jsondata.json";

const DataChart = () => {
  // Extract the necessary data from chartDatajson
  const labels = chartDatajson.map((item) => item.topic);
  const data = chartDatajson.map((item) => item.intensity);

  // Define the dataset object
  const dataset = {
    label: "Intensity",
    backgroundColor: "rgba(75, 192, 192, 0.4)",
    borderColor: "rgba(75, 192, 192, 1)",
    borderWidth: 1,
    data: data,
  };

  // Create the chartData object with datasets
  const chartData = {
    labels: labels,
    datasets: [dataset],
  };

  return (
    <div>
      <h2>Data Visualization</h2>
      <Bar data={chartData} />
    </div>
  );
};

export default DataChart;
