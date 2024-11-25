(self.webpackChunk_N_E=self.webpackChunk_N_E||[]).push([[974],{7208:(e,t,s)=>{Promise.resolve().then(s.bind(s,8080))},8080:(e,t,s)=>{"use strict";s.d(t,{default:()=>b});var l=s(5155),n=s(3202),i=s(8631),a=s(8569),o=s(3286),c=s(1971),r=s(2115);function u(){let[e,t]=(0,r.useState)(""),[s,n]=(0,r.useState)("");return(0,r.useEffect)(()=>{fetch("/wifi").then(e=>e.json()).then(e=>{e.ssid&&e.password&&(t(e.ssid),n(e.password))})},[]),(0,l.jsxs)("div",{className:"flex flex-col items-center justify-center flex-wrap gap-4",children:[(0,l.jsxs)("p",{className:"px-3 text-start w-full",children:["Save WiFi might cause ",(0,l.jsx)("br",{})," the device to restart.",(0,l.jsx)("br",{}),"And lost the current connection",(0,l.jsx)("br",{}),"If can not connect to new WiFi",(0,l.jsx)("br",{})," Device will use old WiFi."]}),(0,l.jsx)(c.r,{type:"text",label:"SSID",value:e,onChange:function(e){console.log("SSID changed ",e.target.value),t(e.target.value)}}),(0,l.jsx)(c.r,{type:"text",label:"Password",value:s,onChange:function(e){n(e.target.value)}}),(0,l.jsx)(o.T,{color:"primary",variant:"ghost",className:"max-w-xs",onClick:function(){fetch("/wifi?ssid=".concat(encodeURIComponent(e),"&password=").concat(encodeURIComponent(s)),{method:"POST"})},children:"Save"})]})}var d=s(7980),x=s(6514),h=s(4481),f=s(3678);function m(){let[e,t]=(0,r.useState)(""),[s,n]=(0,r.useState)(""),[i,a]=(0,r.useState)(!1),[u,m]=(0,r.useState)(!1),[j,p]=(0,r.useState)(!1);return(0,r.useEffect)(()=>{m(!0),fetch("/spawn").then(e=>e.json()).then(e=>{e.latitude&&e.longitude&&(t(e.latitude),n(e.longitude),a(!0))}).finally(()=>{m(!1)})},[]),(0,l.jsxs)("div",{className:"w-full flex flex-col items-center justify-center flex-wrap gap-4",children:[(0,l.jsxs)("p",{className:"px-3 text-start w-full",children:["Compass will point to ",(0,l.jsx)("br",{}),"this location",(0,l.jsx)("br",{}),"when has GPS signal."]}),(0,l.jsx)(c.r,{type:"number",label:"Latitude",value:e,onChange:function(e){let l=e.target.value;t(l),a(""!==l&&""!==s),p(!1)}}),(0,l.jsx)(c.r,{type:"number",label:"Longitude",value:s,onChange:function(t){let s=t.target.value;n(s),a(""!==e&&""!==s),p(!1)}}),(0,l.jsxs)(d.y,{placement:"bottom",isOpen:j,children:[(0,l.jsx)(x.T,{children:(0,l.jsx)(o.T,{color:"primary",variant:"ghost",className:"max-w-xs w-full",onClick:function(){let t=parseFloat(e),l=parseFloat(s);t&&l&&t>=-90&&t<=90&&l>=-180&&l<=180?(console.log("Save ",t,l),p(!1),m(!0),fetch("/spawn?latitude=".concat(e,"&longitude=").concat(s),{method:"POST"}).finally(()=>{m(!1)})):(console.log("Please enter both latitude and longitude"),p(!0),setTimeout(()=>{p(!1)},2e3))},isDisabled:!i,children:u?(0,l.jsx)(f.o,{size:"sm",isIndeterminate:!0,"aria-label":"Loading...",className:"max-w-md"}):"Save"})}),(0,l.jsx)(h.C,{children:(0,l.jsxs)("div",{className:"px-1 py-2",children:[(0,l.jsx)("div",{className:"text-small font-bold",children:"Value Error"}),(0,l.jsx)("div",{className:"text-tiny",children:"Latitude and Longitude must be numbers between -90 and 90, and -180 and 180 respectively."})]})})]})]})}function j(){let[e,t]=(0,r.useState)({buildDate:"",buildTime:"",buildVersion:"",gitBranch:"",gitCommit:""});return(0,r.useEffect)(()=>{fetch("/info").then(e=>e.json()).then(e=>{e&&t(e)})},[]),(0,l.jsx)("div",{children:(0,l.jsxs)("ul",{children:[(0,l.jsxs)("li",{children:["Version: ",e.buildVersion]}),(0,l.jsxs)("li",{children:["Branch: ",e.gitBranch]}),(0,l.jsxs)("li",{children:["Commit: ",e.gitCommit]}),(0,l.jsxs)("li",{children:["Build Time: ",e.buildTime]}),(0,l.jsxs)("li",{children:["Build Date: ",e.buildDate]})]})})}var p=s(6251);function g(){let[e,t]=(0,r.useState)("#aabbcc"),[s,n]=(0,r.useState)(""),i=function(e,t){let[s,l]=(0,r.useState)(e);return(0,r.useEffect)(()=>{let t=setTimeout(()=>{l(e)},200);return()=>{clearTimeout(t)}},[e,200]),s}(e,0);return(0,r.useEffect)(()=>{console.log("Debounced:",e),n(e),fetch("/setColor?color=".concat(encodeURIComponent(e)),{method:"POST"})},[i]),(0,l.jsxs)("div",{className:"w-full flex flex-col items-center justify-center flex-wrap gap-4",children:[(0,l.jsx)("p",{children:e}),(0,l.jsx)(p.jI,{color:e,onChange:function(e){t(e)}})]})}function b(){let[e,t]=(0,r.useState)("default");return(0,l.jsx)("div",{className:"flex flex-col max-w-xl ",children:(0,l.jsx)(a.Z,{className:"p-8",children:(0,l.jsxs)(n.r,{"aria-label":"Options",color:e,onSelectionChange:e=>{"colors"===e&&t("default"),"wifi"===e&&t("success"),"spawn"===e&&t("primary"),"info"===e&&t("danger")},children:[(0,l.jsx)(i.i,{title:"Colors",children:(0,l.jsx)(g,{})},"colors"),(0,l.jsx)(i.i,{title:"WiFi",children:(0,l.jsx)(u,{})},"wifi"),(0,l.jsx)(i.i,{title:"Spawn",children:(0,l.jsx)(m,{})},"spawn"),(0,l.jsx)(i.i,{title:"Info",children:(0,l.jsx)(j,{})},"info")]})})})}}},e=>{var t=t=>e(e.s=t);e.O(0,[507,167,441,517,358],()=>t(7208)),_N_E=e.O()}]);