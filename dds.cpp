import os
import openai

openai.api_key = os.getenv("OPENAI_API_KEY")

response = openai.Completion.create(
  model="code-davinci-002",
  prompt="\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\nwrite the code for bubble sort in c++\n\n",
  temperature=0,
  max_tokens=256,
  top_p=1,
  frequency_penalty=0,
  presence_penalty=0
)