def sandwich(*contents):
    print("\nMaking a pizza with the following contents:")
    for content in contents:
        print(f"- {content}")
        
sandwich('lettuce')
sandwich('ham', 'mustard')
sandwich('lettuce', 'ham', 'mustard')