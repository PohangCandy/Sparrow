#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    // �׸��� �׷����� ȭ�� ����
    RenderWindow window(VideoMode(600, 480), "LUNAR LANDER");
    window.setFramerateLimit(60);

    // ���ӿ� �ʿ��� ��������Ʈ ����
    Texture t1;
    Sprite Background;
    t1.loadFromFile("images/background.png");
    Background.setTexture(t1);

    Texture t2; // �ؽ�Ʈ ��ü
    Sprite lander; // ��������Ʈ ��ü
    t2.loadFromFile("images/spaceship.png"); // �̹��� ������ �ؽ�ó ��ü�� �����Ѵ�.
    lander.setTexture(t2); // ��������Ʈ�� �ؽ�ó�� �����Ѵ�.


    // ���⼭���� ���� ����
    while (window.isOpen())
    {
        // �̺�Ʈ �˻� �� ó��
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Left))
            lander.move(-10.0, 0.0);
        if (Keyboard::isKeyPressed(Keyboard::Right))
            lander.move(10.0, 0.0);


        // ȭ���� �����
        window.clear();
        // ȭ�鿡 ��������Ʈ�� �׸���
        window.draw(Background);
        window.draw(lander);
        // ȭ���� ǥ���Ѵ�
        window.display();
    }

    return 0;
}

