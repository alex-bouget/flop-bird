import Phaser from 'phaser';
import Background from './pack/background';

class MyGame extends Phaser.Scene
{
    background = null;

    constructor ()
    {
        super();
    }

    preload ()
    {
        //  This is an example of loading a static image from the public folder:
        this.load.image('background', 'assets/bg.jpg');
    }
      
    create ()
    {
        // Get the width and height of the game window
        this.background = new Background(this, "background");
    }
}

const config = {
    type: Phaser.AUTO,
    parent: 'phaser-example',
    pixelArt: true,
    scene: MyGame,
    width: window.innerWidth,
    height: window.innerHeight
};

const game = new Phaser.Game(config);