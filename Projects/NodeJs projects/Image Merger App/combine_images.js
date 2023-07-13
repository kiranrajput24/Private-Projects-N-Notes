const { createCanvas, loadImage } = require('canvas');
const fs = require('fs');
const path = require('path');
const readlineSync = require('readline-sync');

let k=1;

// #file Name According to Required Images
const BrowserApp="_Browser/"
const TerminalApp="_Terminal/"
const VsCodeApp="_VsCode/"

// ----------------------------------------------------
// ##############Static varibale###################

// #static paths for family raw images
const static_browser_images_path_for_family ="./Layers/Static_Layers/Static_Layers_Family/Browser/";
const static_Vscode_images_path_for_family ="./Layers/Static_Layers/Static_Layers_Family/VsCode/";
const static_Terminal_images_path_for_family ="./Layers/Static_Layers/Static_Layers_Family/Terminal/";


// #static paths for family raw images
const static_browser_images_path_for_friends ="./Layers/Static_Layers/Static_Layers_Friends/Browser/";
const static_Vscode_images_path_for_friends ="./Layers/Static_Layers/Static_Layers_Friends/VsCode/";
const static_Terminal_images_path_for_friends ="./Layers/Static_Layers/Static_Layers_Friends/Terminal/";

// ##############Variable(Current) varibale###################
// Current images path of family member
const vari_path="./Layers/Current(Variabe)Images/";
































// family_member_name raw images 
let family_member_name=[
  // 'arjun1',
  // 'arjun2',
  // 'bindu1',
  // 'bindu2',
  // 'krishna1',
  // 'krishna2',
  // 'renuka1',
  // 'renuka2',

  // 'dinesh1w',
  'dinesh2w',
  // 'manisha1w',
  'manisha2w',
  // 'sharu1w',
  'sharu2w'
];  

// family_member_fullname Final images 
 let family_member_fullname=[
  // 'arjun', 
  // 'arjun',
  // 'Bindu',
  // 'Bindu',
  // 'KrishnaBohra',
  // 'KrishnaBohra',
  // 'RenukaBohra',
  // 'RenukaBohra',

  // 'DineshBahadur',
  'DineshBahadur',
  // 'Manisha',
  'Manisha',
  // 'Sharu',
  'Sharu'
];  

//------------------------------------------------
// Friends_name raw images 
let friends_name=[
//  'anisha1', 
 'anisha2',
//  'ajay1',
 'ajay2',
//  'jay1',
 'jay2',
//  'mukesh1',
 'mukesh2',
//  'naj1',
 'naj2',
//  'rohit1',
 'rohit2'
]; 

// friends_fullname Final images 
 let friends_fullname=[
// 'Anisha',   
'Anisha',
// 'Ajay',
'Ajay',
// 'Jay',
'Jay',
// 'Mukesh',
'Mukesh',
// 'Naj',
'Naj',
// 'Rohit',
'Rohit'
];





// -------------------------------------------------
//###################Dynamic Variable########May need Change very time #########

//  #generate images to root folder 
let family_export_path = "./Build_Family_Submission/";
let friend_export_path ="./Build_Friends_Submission/";

// #generate images to Pictures folder
family_export_path ="/home/kali/Pictures/";
friend_export_path ="/home/kali/Pictures/";








// -----------------------------------------------

// #main function
function main()
{
  // #-------------------------
  console.log("Images generating")

  // ##Enter Current Quest full Name  ex-> C70_Q1_
//##############################################################################################################################
  quest_full_name='C74_Q2_';       // need changes

// ###############call for genarate Family Member Images#########################


  // // For Browser Output
  GeneratePNG(static_browser_images_path_for_family,family_member_name,family_member_fullname,BrowserApp,quest_full_name,family_export_path);
  
  // // // Vscode Output
  //   GeneratePNG(static_Vscode_images_path_for_family,family_member_name,family_member_fullname,VsCodeApp,quest_full_name,family_export_path);

  // // Terminal Output
  // GeneratePNG(static_Terminal_images_path_for_family,family_member_name,family_member_fullname,TerminalApp,quest_full_name,family_export_path);
  



  // ##################call for genarate Friends Images#############################
  // ####create New Variable for this like path locatioin separate for better understand



 // For Browser Output
  GeneratePNG(static_browser_images_path_for_friends,friends_name,friends_fullname,BrowserApp,quest_full_name,friend_export_path)
  
  // // Vscode Output
  //   GeneratePNG(static_Vscode_images_path_for_friends,friends_name,friends_fullname,VsCodeApp,quest_full_name,friend_export_path)

  // // Terminal Output
  // GeneratePNG(static_Terminal_images_path_for_friends,friends_name,friends_fullname,TerminalApp,quest_full_name,friend_export_path)


}






































//main to main function 
main();

// ##################function Perform Task######################
// Image Generation Function

function GeneratePNG(static_path,name,fullname,app_name,quest_full_name,export_path)
{
for(let i=0; i<name.length;i++)
{
  const upperLayerImagePath = `${static_path+name[i]}.png`;
  const backgroundImagePath = `${vari_path+name[i]}.png`;
  
  let outputImagePath;

  if((name[i][name[i].length-1])=== "1")
  {
   outputImagePath = `${export_path}Kali_First_User${(app_name+quest_full_name)+(fullname[i])}.png`;
  }
  else if((name[i][name[i].length-1])=== "2")
  {
   outputImagePath = `${export_path}Kali_Second_User${(app_name+quest_full_name)+(fullname[i])}.png`;
  }
  else if(((name[i][name[i].length-2])=== "1") && ((name[i][name[i].length-1])=== "w") )
  {
   outputImagePath = `${export_path}Window_First_User${(app_name+quest_full_name)+(fullname[i])}.png`;
  }
  else if(((name[i][name[i].length-2])=== "2") && ((name[i][name[i].length-1])=== "w") )
  {
   outputImagePath = `${export_path}Window_Second_User${(app_name+quest_full_name)+(fullname[i])}.png`;
  }

// Create the necessary directories if they don't exist
const directoryPath = path.dirname(outputImagePath);
fs.mkdirSync(directoryPath, { recursive: true });


// Load the background image
loadImage(backgroundImagePath).then((background) => {
  // Create a new canvas with the background image dimensions
  const canvas = createCanvas(background.width, background.height);
  const context = canvas.getContext('2d');

  // Draw the background image onto the canvas
  context.drawImage(background, 0, 0);

  // Load the upper layer image
  loadImage(upperLayerImagePath).then((upperLayer) => {
    // Draw the upper layer image onto the canvas
    context.drawImage(upperLayer, 0, 0);

    // Convert the canvas to a buffer representing the output image
    const buffer = canvas.toBuffer('image/jpeg');

    // Save the output image
    fs.writeFileSync(outputImagePath, buffer);

    console.log(`${k++}.) ${quest_full_name+fullname[i]}`);
  });
});
};
}