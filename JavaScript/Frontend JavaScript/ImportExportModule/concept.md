### Exporting default values.

```
const resources = { 
  valueA, 
  valueB 
}
export { resources as default };
```

- shorthand
```
const resources = {
  valueA,
  valueB
}
export default resources;
```


### Importing default values.
```
import importedResources from './module.js';
```

```
// This will work...
import resources from 'module.js'
const { valueA, valueB } = resources;

// This will not work...
import { valueA, valueB } from 'module.js'
```




----
---
----
#### export
-  dom-functions.js
```
const toggleHiddenElement = (domElement) => {
    if (domElement.style.display === 'none') {
      domElement.style.display = 'block';
    } else {
      domElement.style.display = 'none';
    }
}

const changeToFunkyColor = (domElement) => {
  const r = Math.random() * 255;
  const g = Math.random() * 255;
  const b = Math.random() * 255;
        
  domElement.style.background = `rgb(${r}, ${g}, ${b})`;
}

const resources = { 
  toggleHiddenElement, 
  changeToFunkyColor
}
export default resources;
```
#### import
- This default exports object can now be used within secret-messages.js like so:


- import domFunctions from '../modules/dom-functions.js';
```
const { toggleHiddenElement, changeToFunkyColor } = domFunctions;

const buttonElement = document.getElementById('secret-button');
const pElement = document.getElementById('secret-p');

buttonElement.addEventListener('click', () => {
  toggleHiddenElement(pElement);
  changeToFunkyColor(buttonElement);
});
```
