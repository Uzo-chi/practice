def send_messages(short_text, sent):
    while short_text:
        current_text = short_text.pop(0)
        print(current_text)
        sent.append(current_text)

def show_messages(short, sent):
    send_messages(short, sent)

messages = ["Hello, nice to meet you.", "How are you?", "Is all well?",
            "Beatiful day, isn't it?"]
sent_messages = []

show_messages(messages[:], sent_messages)
print(f"\n{messages}")
print(sent_messages)