class Background {
    constructor(scene, background) {
        this.scene = scene;
        this.background = background;

        this.window_size = {
            width: this.scene.scale.width,
            height: this.scene.scale.height
        };
        this.bg_size = {
            width: this.scene.textures.get('background').getSourceImage().width,
            height: this.scene.textures.get('background').getSourceImage().height
        };
        this.sprite = this.scene.add.image(this.window_size.width / 2, this.window_size.height / 2, this.background);
        this.sprite.setDisplaySize(this.bg_size.width * this.window_size.height / this.bg_size.height, this.window_size.height);
        this.moveBackground();
    }

    moveBackground() {
        this.scene.tweens.add({
            targets: this.sprite,
            x: this.sprite.x - 100,
            duration: 1000,
            ease: 'Linear',
            repeat: -1,
        });
    }


}

export default Background;
