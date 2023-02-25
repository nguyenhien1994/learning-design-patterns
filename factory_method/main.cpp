#include <iostream>
#include <memory>

class Button {
public:
    virtual void render() = 0; // pure virtual function
};

class WindowsButton : public Button {
public:
    void render() override {
        std::cout << "Rendering a Windows button\n";
    }
};

class HTMLButton : public Button {
public:
    void render() override {
        std::cout << "Rendering a HTML button\n";
    }
};

class Dialog {
public:
    virtual void renderWindow() {
        auto ok_button = createButton(); // call factory method
        ok_button->render();
    }

protected:
    virtual std::unique_ptr<Button> createButton() = 0; // pure virtual factory method
};

class WindowsDialog : public Dialog {
protected:
    std::unique_ptr<Button> createButton() override {
        return std::make_unique<WindowsButton>();
    }
};

class WebDialog: public Dialog {
protected:
    std::unique_ptr<Button> createButton() override {
        return std::make_unique<HTMLButton>();
    }
};

void initializeGUI(std::unique_ptr<Dialog> dialog) {
    dialog->renderWindow();
}

template<typename DialogImpl>
inline
std::unique_ptr<Dialog> make_dialog() {
    return std::make_unique<DialogImpl>();
}

std::unique_ptr<Dialog> make(const std::string& type) {
    if (type == "Windows") {
        return make_dialog<WindowsDialog>();
    } else if (type == "Web") {
        return make_dialog<WebDialog>();
    } else {
        throw std::runtime_error("Error! Unsupported dialog type.");
    }
}

int main() {
    auto dialogWindows = make("Windows");
    auto dialogWeb = make("Web");

    initializeGUI(std::move(dialogWindows));
    initializeGUI(std::move(dialogWeb));
    return 0;
}
