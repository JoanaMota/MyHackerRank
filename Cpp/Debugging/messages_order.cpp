#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message
{
private:
    std::string m_text;
    int m_index;

public:
    Message() : m_text{""}, m_index{0} {}
    const string &get_text()
    {
        return m_text;
    }
    void append_text(const std::string &f_text)
    {
        m_text += f_text;
    }
    void set_index(const int f_index)
    {
        m_index = f_index;
    }
    bool operator<(const Message &f_msg) const
    {
        if (f_msg.m_index < m_index)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class MessageFactory
{
private:
    int m_nrMsgs;

public:
    MessageFactory() : m_nrMsgs{0} {}
    Message create_message(const string &text)
    {
        Message msg;
        msg.append_text(text);
        msg.set_index(m_nrMsgs);
        m_nrMsgs++;
        return msg;
    }
};

class Recipient
{
public:
    Recipient() {}
    void receive(const Message &msg)
    {
        messages_.push_back(msg);
    }
    void print_messages()
    {
        fix_order();
        for (auto &msg : messages_)
        {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }

private:
    void fix_order()
    {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network
{
public:
    static void send_messages(vector<Message> messages, Recipient &recipient)
    {
        // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());
        for (auto msg : messages)
        {
            recipient.receive(msg);
        }
    }
};

int main()
{
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) // This loop will not end could not get how they put this to work on HackerRank
    {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
