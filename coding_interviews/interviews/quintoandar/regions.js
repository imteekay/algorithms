// Regions Map
// We want to represent our operational area in memory and store it in a database.
// The regions will be used in many different ways. We want to be able to manage them and perform different operations on top of them.
// They will have a label that needs to be unique
// The top-level hierarchy is pre-defined as Country > State > City,
// but after City the regions represented could have many different levels: Zones ("Zona Sul"), Neighborhoods ("Moema") or even parts of a Neighborhood.

// brasil
// ├─ rj
// │  ├─ buzios
// │  ├─ marica
// │  └─ rio-de-janeiro
// └─ sp
//    ├─ ...
//    ├─ osasco
//      |- centro
//    └─ sao-paulo
//       _- santana
//       ├─ central
//       ├─ north
//       │  ├─ santana
//       │  └─ tucuruvi
//       ├─ south
//       │  ├─ moema
//       │  └─ vila-mariana
//       └─ west
//          ├─ butanta
//             |- vila indiana
//          └─ pinheiros

area1 = buzios;
area2 = rio - de - janeiro;

const isDiff = (area1, area2);

const isEqual = (area1, area2) => {
  if (Object.keys(area1).length !== Object.keys(area2).length) {
    return false;
  }

  let result;

  for (const [key, value] of Object.entries(area1)) {
    const isObj1 = typeof value === 'object';
    const isObj2 = typeof area2[key] === 'object';

    if (isObj1 && isObj2) {
      result = result && isEqual(value, area2[key]);
    }

    if (isObj1 && !isObj2) {
      result = false;
      break;
    }

    if (isObj2 && !isObj1) {
      result = false;
      break;
    }

    // strings
    if (value !== area2[key]) {
      result = false;
      break;
    }
  }

  return result;
};

interface Region {
  [index: string]: string | Region;
}

interface City {
  [index: string]: Region;
}

interface Country {
  [index: string]: City;
}

interface Area {
  [index: string]: Country;
}

/**
 * {
 * 		brazil: {
 * 			[state]: {
 * 				[city]: {
 * 					[neighborhood]: string | Map<string, string>
 * 				}
 * 			}
 * 		}
 * }
 **/
