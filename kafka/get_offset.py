
m confluent_kafka import Consumer, KafkaError,TopicPartition

consumer = Consumer({'bootstrap.servers': '域名:9092', 'group.id': 'tesssssst_group',
                       'default.topic.config': {'auto.offset.reset': 'earliest', 'sasl.username': 'xxx',
                                                'sasl.password': 'xxx', 'sasl.mechanisms': 'PLAIN',
                                                'security.protocol': 'sasl_plaintext'}})
consumer.subscribe(['qtt_search_model_advertising'])

topicInfo = consumer.list_topics('qtt_search_model_advertising')
partitions = topicInfo.topics['qtt_search_model_advertising'].partitions.keys()
print partitions

for par in partitions:
    offset_tuple = consumer.get_watermark_offsets(TopicPartition('qtt_search_model_advertising',par))
    print str(par) + ":" + str(offset_tuple[1])
