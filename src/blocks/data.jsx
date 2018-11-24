import React from 'react';
import './data.scss'
import { List } from 'semantic-ui-react'

const Dat = ({data, adres, tel, mail}) =>(
    <div className = "data">
        <List>
        <List.Item>
        <List.Header>Data urodzenia</List.Header>
        {data}
        </List.Item>
        <List.Item>
        <List.Header>Adres</List.Header>
        {adres}
        </List.Item>
        <List.Item>
        <List.Header>Telefon</List.Header>
        {tel}
        </List.Item>
        <List.Item>
        <List.Header>Email</List.Header>
        {mail}
        </List.Item>
    </List>
  </div>
)

export default Dat