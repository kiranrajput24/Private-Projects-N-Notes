const toggle = document.querySelector("#toggle-list");
const arrowIcon = document.querySelector(".rotate180");
const list = document.querySelector(".drop-list");

toggle.addEventListener("click", function () {
  toggle.classList.toggle("low-opacity");

  arrowIcon.classList.toggle("rotate180");
  list.classList.toggle("hide");
});

async function loadPokemon(url) {
  try {
    const res = await fetch(url);
    if (res.status !== 200) {
      throw new Error();
    }

    const data = await res.json();
    const pokemonNames = data.results.map((pokemon) => pokemon.name);
    const pokemonData = await getPokemonData(pokemonNames);
    setPokemonDataToDOM(pokemonData);
  } catch (err) {
    console.log(err);
  }
}

async function getPokemonData(pokemonNames) {
  const pokemonDetails = await Promise.all(
    pokemonNames.map(async (name) => {
      try {
        let res = await fetch(`https://pokeapi.co/api/v2/pokemon/${name}`);
        if (res.status !== 200) {
          throw new Error();
        }
        const data = await res.json();
        return data;
      } catch (err) {
        console.log(err);
      }
    })
  );
  return pokemonDetails;
}

function setPokemonDataToDOM(pokemonData) {
  pokemonData.map((p) => {
    p.abilities.length = 2;

    const div = document.createElement("div");
    div.classList.add("card");
    div.innerHTML = `<img class="card-img"
    src=${p.sprites.other.dream_world.front_default}
    alt="pokemon Img"
    />
    <h4>${p.name}</h4>
    <p>Id : ${p.id} order:${p.order}</p>
    <p>Type : ${p.types.map((val) => val.type.name)}</p>
    <p>Ability : ${p.abilities.map((val) => val.ability.name)}</p>
    <p>height :${p.height}  Weight : ${p.weight} kg</p>
    </div>`;

    document.querySelector(".flex-pokemon-container").appendChild(div);
  });
}

const btn = document.querySelector("#search-btn");
const formInput = document.querySelector("#form-input");

btn.addEventListener("click", async (e) => {
  formInput.value;

  try {
    const pokeDetail = await getPokemonData([`${formInput.value}`]);
    console.log("🚀 ~ file: script.js:99 ~ pokeDetail:", pokeDetail);
    // setPokemonDataToDOM(pokeDetail)
  } catch (err) {
    console.log(err);
  }
});

let offset = 20;
let scroll = 0;
window.onwheel = (e) => {
  if (e.deltaY >= 0) {
    // Scrolling Down with mouse
    scroll++;
    if (scroll % 5 === 0) {
      offset += 5;
      loadPokemon(
        `https://pokeapi.co/api/v2/pokemon/?offset=${offset}&limit=5`
      );
    }
  }
};

loadPokemon("https://pokeapi.co/api/v2/pokemon/");
